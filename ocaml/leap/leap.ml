let leap_year y = match (y mod 400, y mod 100, y mod 4) with
    | (0, _, _) -> true
    | (_, 0, _) -> false
    | (_, _, 0) -> true
    | _ -> false;;