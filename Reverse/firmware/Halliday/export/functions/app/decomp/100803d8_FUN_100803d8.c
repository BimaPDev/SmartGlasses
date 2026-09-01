/* FUN_100803d8 @ 0x100803d8 */

int FUN_100803d8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 local_28 [20];
  
  local_28[0] = 0;
  uVar1 = (uint)*(byte *)(*(int *)param_1[3] + 10) * (uint)*(byte *)(*(int *)param_1[3] + 0xb);
  if (uVar1 == 0x20) {
    iVar2 = -1;
  }
  else {
    iVar2 = (1 << (uVar1 & 0xff)) + -1;
  }
  iVar2 = FUN_10121fd8(param_1,param_2,param_3,0,iVar2,0,local_28);
  if (((iVar2 != 1) && (*(char *)(*param_1 + 0x10) != '\0')) &&
     (pcVar3 = *(code **)(*param_1 + 0xc), pcVar3 != (code *)0x0)) {
    (*pcVar3)(DAT_10080440,DAT_1008043c,0xdd,param_3,param_2,iVar2);
  }
  return iVar2;
}

