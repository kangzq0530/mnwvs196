--[[inv = inventory
--self.say(inventory.exchange(100, 1372007, 1))

self.askAvatar("Select : ", 4031249, {30030
,30020
,30000
,30480
,30310
,30330
,30060
,30150
,30410
,30210
,30140
,30120
,30200})

s = self.askMenu("#L0#Test0#l\r\n#L1#Test1#l\r\n#L2#Test2#l\r\n#L3#Test3#l")

s = self.askYesNo("���� Yes No")
if(s == 1) then
    self.say("Press Yes")
else
    self.say("Press No")
end

s = self.askText("��J�Y�Ǥ�r:", "��r", 0, 5)
self.sayNext("��J����r : " .. s)

s = self.askNumber("��J�Y�Ǽƭ�:", 100, 0, 10000)
self.sayNext("��J���ƭ� : " .. s)

s = self.sayNext("����")--]]
fieldSet.enter("TestFieldSet")