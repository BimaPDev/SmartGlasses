/* FUN_2c498538 @ 0x2c498538 */

void FUN_2c498538(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  
  iVar1 = DAT_2c4985b4;
  FUN_2c644044(*(undefined4 *)(DAT_2c4985b4 + 0x38),0xffffffff);
  if (*(int *)(param_1 + 0x25804) != DAT_2c4985b8) {
    iVar4 = (uint)*(ushort *)(param_1 + 0x25800) + (uint)*(ushort *)(param_1 + 0x25802) * 0x140;
    iVar5 = param_1 + iVar4;
    iVar4 = iVar4 + param_2;
    uVar3 = 0;
    uVar2 = extraout_r1;
    if (*(short *)(param_1 + 0x25806) != 0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        iVar4 = FUN_2c674668(iVar4,iVar5,*(undefined2 *)(param_1 + 0x25804));
        uVar2 = (uint)*(ushort *)(param_1 + 0x25806);
        uVar3 = (uint)uVar6;
        iVar4 = iVar4 + 0x140;
        iVar5 = iVar5 + 0x140;
      } while (uVar3 < uVar2);
    }
    FUN_2c644080(*(undefined4 *)(iVar1 + 0x38),uVar2,uVar3,param_4);
    return;
  }
  FUN_2c674668(param_2,param_1,0x25800);
  FUN_2c644080(*(undefined4 *)(iVar1 + 0x38));
  return;
}

