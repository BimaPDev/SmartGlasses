/* FUN_10015704 @ 0x10015704 */

undefined4 FUN_10015704(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = DAT_100157c4;
  local_1c = *DAT_100157c0;
  FUN_1011ea48(&local_30,0,0x14,0);
  local_28 = 0xffffffff;
  uVar2 = (iVar1 - DAT_100157c8) * 0x20 & 0xff00;
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) goto LAB_1001575c;
  FUN_100a5b78(DAT_100157cc | uVar2,DAT_100157d4,DAT_100157d0);
  uVar3 = 0xfffffff2;
  while( true ) {
    if (*DAT_100157c0 == local_1c) break;
    iVar1 = FUN_1013cdc0();
LAB_1001575c:
    local_30 = 0;
    iStack_2c = param_2;
    iVar1 = FUN_100a94c4(iVar1,&local_30);
    if (iVar1 == 0) {
      FUN_100a5b78(DAT_100157dc | uVar2,DAT_100157d4,DAT_100157e0,param_2,local_24,local_20);
      uVar3 = 0;
      if (local_24 < 0) {
        param_3[1] = -1;
        param_2 = param_2 + *param_3;
        if (param_2 < 0) {
          param_2 = 0;
        }
        *param_3 = param_2;
      }
      else {
        *param_3 = local_24;
        param_3[1] = local_20;
      }
    }
    else {
      FUN_100a5b78(uVar2 | 0x1260011,DAT_100157d4,DAT_100157d8,param_2);
      uVar3 = 0xffffffea;
    }
  }
  return uVar3;
}

