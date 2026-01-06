function decide_trust(level, severity)
    if level == "ROOT" then 
        return "NONE"
    end 

    if severity > 0.9 then 
        return "BLOCK"
        elseif severity > 0.9 then
            return "HARD_LIMIT"
        elseif severity > 0.3 then
            return "SOFT_LIMIT"
        end

        return "NONE"
end 