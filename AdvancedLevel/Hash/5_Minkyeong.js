function solution(genres, plays) {
  const genreInfo = {};
  const answer = [];

  // 장르별 총 재생 횟수, 노래 정보 저장
  for (let i = 0; i < genres.length; i++) {
    const genre = genres[i];
    if (!genreInfo[genre]) {
      genreInfo[genre] = {
        genre,
        playTotal: 0,
        songs: [],
      };
    }
    genreInfo[genre].playTotal += plays[i];
    genreInfo[genre].songs.push({ index: i, plays: plays[i] });
  }

  // 가장 플레이 수가 많은 장르 순서대로 정렬
  const sortedGenre = Object.values(genreInfo).sort(
    (a, b) => b.playTotal - a.playTotal
  );

  // 각 장르에서 가장 많이 재생된 노래 두개를 선택하여 인덱스 push
  for (let genre of sortedGenre) {
    genre.songs.sort((a, b) => {
      if (a.plays === b.plays) {
        return a.index - b.index;
      }
      return b.plays - a.plays;
    });
    answer.push(genre.songs[0].index);

    if (genre.songs[1]) {
      answer.push(genre.songs[1].index);
    }
  }

  return answer;
}

// O(n log n)
