/* FUN_100aaee4 @ 0x100aaee4 */

int FUN_100aaee4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  
  iVar1 = DAT_100aaf28;
  FUN_1011ea48(DAT_100aaf28,0,0xc60,param_4,param_4);
  uVar4 = iVar1 + 0x25bU & 0xfffffffc;
  *(uint *)(iVar1 + 0x250) = uVar4;
  *(uint *)(iVar1 + 0x254) = uVar4 + 0x600;
  pcVar5 = *(code **)(param_1 + 8);
  *(int *)(iVar1 + 0x38) = param_1;
  iVar2 = (*pcVar5)(param_1,0,2);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(param_1 + 0xc))(param_1,0);
    *(undefined4 *)(iVar1 + 0x48) = uVar3;
  }
  return DAT_100aaf28;
}

