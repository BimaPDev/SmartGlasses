/* FUN_1011ce40 @ 0x1011ce40 */

void FUN_1011ce40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int local_98 [8];
  int local_78 [8];
  undefined4 local_58 [8];
  undefined4 auStack_38 [9];
  
  iVar1 = FUN_1011c8a4(param_2,param_4);
  if (iVar1 == 0) {
    FUN_1011c918(local_98,param_2,param_4);
    FUN_1011c918(local_78,param_3);
    FUN_1011c88e(local_58,param_4);
    local_58[0] = 1;
    FUN_1011c88e(auStack_38);
    while (iVar1 = FUN_1011c930(local_98,local_78,param_4), iVar1 != 0) {
      if (local_98[0] << 0x1f < 0) {
        if (local_78[0] << 0x1f < 0) {
          if (0 < iVar1) {
            FUN_1011c984(local_98,local_98,local_78,param_4);
            FUN_1011c756(local_98,param_4);
            iVar1 = FUN_1011c930(local_58,auStack_38,param_4);
            if (iVar1 < 0) {
              FUN_1011c726(local_58,local_58,param_3,param_4);
            }
            FUN_1011c984(local_58,local_58,auStack_38,param_4);
            goto LAB_1011ceaa;
          }
          FUN_1011c984(local_78,local_78,local_98,param_4);
          FUN_1011c756(local_78,param_4);
          iVar1 = FUN_1011c930(auStack_38,local_58,param_4);
          if (iVar1 < 0) {
            FUN_1011c726(auStack_38,auStack_38,param_3,param_4);
          }
          FUN_1011c984(auStack_38,auStack_38,local_58,param_4);
        }
        else {
          FUN_1011c756(local_78,param_4);
        }
        puVar2 = auStack_38;
      }
      else {
        FUN_1011c756(local_98,param_4);
LAB_1011ceaa:
        puVar2 = local_58;
      }
      FUN_1011c770(puVar2,param_3,param_4);
    }
    FUN_1011c918(param_1,local_58,param_4);
  }
  else {
    FUN_1011c88e(param_1);
  }
  return;
}

