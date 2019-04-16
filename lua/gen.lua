-- LuaJIT LangBench impl

local i = 0
local file = io.open("../set.txt", "r");
local data = {}
for line in file:lines() do
    table.insert (data, line);
end

local start = os.clock()
for idx = 1, #data, 1 do
    if string.find(data[idx], "abcde") then
        i = i + 1
    end
end

print(string.format("LuaJIT in %dms - %d", (os.clock() - start) * 1000, i))