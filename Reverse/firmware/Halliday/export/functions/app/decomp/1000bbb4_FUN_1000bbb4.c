/* FUN_1000bbb4 @ 0x1000bbb4 */

void FUN_1000bbb4(char *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 local_26;
  undefined1 local_24;
  undefined4 local_23;
  undefined1 local_1f;
  int local_1c;
  
  local_1c = *DAT_1000bc80;
  if (param_2 == 0) {
    param_3 = 0;
  }
  local_26 = 0;
  local_1f = 0;
  local_24 = (undefined1)param_4;
  local_23 = (uint)param_5 << 0x18;
  if (param_4 != 5) {
    local_23 = CONCAT13(param_5,CONCAT21((short)param_3,param_1[5] & 0xfU | *param_1 << 4));
  }
  if (param_5 != 0) {
    local_23 = local_23 & 0xffffff0f;
  }
  local_1f = FUN_1005393c(0,&local_24,5);
  if (param_3 != 0) {
    local_26 = FUN_10054558(0,param_2,param_3);
  }
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  (**(code **)(param_1 + 0x14))(&local_24,6,0);
  if (param_3 != 0) {
    (**(code **)(param_1 + 0x14))(&local_26,2,0);
    (**(code **)(param_1 + 0x14))(param_2,param_3,0);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  param_1[5] = param_1[5] & 0xf0U | param_1[5] + 1U & 0xf;
  if (*DAT_1000bc80 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

