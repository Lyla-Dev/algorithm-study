function solution(id_pw, db) {
  for (let [id, pw] of db) {
    if (id_pw[0] === id && id_pw[1] === pw) return "login";
    if (id_pw[0] === id && id_pw[1] !== pw) return "wrong pw";
    if (id_pw[0] !== id) continue;
  }
  return "fail";
}

// O(N)
