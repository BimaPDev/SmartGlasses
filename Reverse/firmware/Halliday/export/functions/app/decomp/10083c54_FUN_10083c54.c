/* FUN_10083c54 @ 0x10083c54 */

undefined4 FUN_10083c54(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_10073804(DAT_10083cb4,&local_18,4);
  if (iVar1 < 1) {
    FUN_1011edbc(0,&local_18);
    FUN_1011edbc(1,&local_14);
    if (local_18 != (int *)0x0) {
      piVar2 = (&local_18)[local_14 != 0];
      *param_1 = (int)piVar2;
      if ((local_14 != 0) == 0) {
        return 0;
      }
      if (param_2 != 0) {
        return 0;
      }
      if (piVar2 != (int *)0xff) {
        return 0;
      }
    }
    local_18 = (int *)&DAT_00000064;
  }
  else {
    FUN_10119dc2(DAT_10083cb8,local_18);
  }
  *param_1 = (int)local_18;
  return 0;
}

