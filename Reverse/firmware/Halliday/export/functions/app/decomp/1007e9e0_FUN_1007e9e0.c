/* FUN_1007e9e0 @ 0x1007e9e0 */

undefined4 FUN_1007e9e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_2c [20];
  
  iVar3 = (uint)*(byte *)(*(int *)param_1[3] + 0xb) * (uint)*(ushort *)(*(int *)param_1[3] + 0xe);
  if ((uint)(iVar3 * 2) <= (uint)(param_2 + param_3)) {
    param_3 = iVar3 * 2 - param_2;
  }
  while( true ) {
    if (param_3 < 1) {
      return 0;
    }
    iVar1 = FUN_10120c34(param_1,param_2);
    if (iVar1 == -1) break;
    FUN_10120a74(param_1,auStack_2c,0,iVar1,0);
    FUN_1007e6ec(param_1,auStack_2c);
    param_2 = param_2 + iVar3;
    param_3 = param_3 - iVar3;
  }
  if (*(char *)(*param_1 + 0x10) == '\0') {
    return 0;
  }
  pcVar2 = *(code **)(*param_1 + 0xc);
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  (*pcVar2)(DAT_1007ea58,DAT_1007ea54,0xda);
  return 0;
}

