def solution(id_pw, db):
    db_dict = dict(db)
    user_id, usder_pw = id_pw

    if user_id in db_dict:
        if db_dict[user_id] == usder_pw:
            return "login"
        else:
            return "wrong pw"
    
    return "fail"