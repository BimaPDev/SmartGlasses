/* FUN_140a2e68 @ 0x140a2e68 */

uint FUN_140a2e68(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *DAT_140a2ec0;
  bVar5 = (param_2 & 3) != 0;
  if (bVar5) {
    param_2 = param_2 & 0xfffffffc;
  }
  uVar4 = *DAT_140a2ebc - iVar3;
  if (bVar5) {
    param_2 = param_2 + 4;
  }
  if (param_2 <= uVar4) {
    *DAT_140a2ec0 = param_2 + iVar3;
    uVar2 = DAT_140a2ecc;
    uVar1 = DAT_140a2ec8;
    iVar3 = iVar3 + DAT_140a2ec4;
    *param_1 = iVar3;
    FUN_1402a6e8(4,0x49,DAT_140a2ed4,DAT_140a2ed0,uVar2,uVar1,iVar3,param_2,uVar4);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140a2ed8,param_2,uVar4);
}

