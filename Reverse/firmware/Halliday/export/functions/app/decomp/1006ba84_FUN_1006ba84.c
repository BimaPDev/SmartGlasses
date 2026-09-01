/* FUN_1006ba84 @ 0x1006ba84 */

int FUN_1006ba84(int param_1,char *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int local_14;
  
  *(char *)(param_1 + 8) = (char)param_3;
  iVar4 = param_1;
  uVar5 = param_3;
  local_14 = param_4;
  if (((param_2 == (char *)0x0) || (uVar1 = FUN_1011ea10(param_2), uVar1 < 2)) || (*param_2 != '/'))
  {
    FUN_100a5b78((DAT_1006bb54 - DAT_1006bb50) * 0x20 & 0xff00U | 0x8e0011,DAT_1006bb5c,DAT_1006bb58
                 ,DAT_1006bb50,iVar4,param_2,uVar5);
    return -0x16;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return -0x10;
  }
  iVar2 = FUN_1006b9f4(&local_14);
  if (iVar2 < 0) {
    FUN_100a5b78((DAT_1006bb54 - DAT_1006bb50) * 0x20 & 0xff00U | 0x980011,DAT_1006bb5c,DAT_1006bb60
                 ,DAT_1006bb50,iVar4,param_2,uVar5);
    return iVar2;
  }
  if (((int)((uint)*(byte *)(local_14 + 0x20) << 0x1e) < 0) && ((param_3 & 0x12) != 0)) {
    return -0x1e;
  }
  pcVar3 = (code *)**(undefined4 **)(local_14 + 0x1c);
  if (pcVar3 == (code *)0x0) {
    return -0x86;
  }
  *(int *)(param_1 + 4) = local_14;
  iVar2 = (*pcVar3)(param_1,param_2,param_3);
  if (-1 < iVar2) {
    return iVar2;
  }
  FUN_100a5b78((DAT_1006bb54 - DAT_1006bb50) * 0x20 & 0xff00U | 0xa80011,DAT_1006bb5c,DAT_1006bb64,
               iVar2,iVar4,param_2,uVar5);
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar2;
}

