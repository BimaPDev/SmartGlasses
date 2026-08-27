/* FUN_14028888 @ 0x14028888 */

void FUN_14028888(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  iVar3 = DAT_14028938;
  if (param_1 >> 4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028960);
  }
  iVar8 = param_1 << 0x1c;
  param_1 = param_1 & 0xf;
  if (-1 < iVar8) {
    if (*(char *)(DAT_14028938 + param_1) != '\0') {
      FUN_14028694();
      uVar7 = DAT_14028944;
      puVar5 = DAT_14028940;
      pbVar4 = DAT_1402893c;
      iVar8 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        bVar1 = *DAT_1402893c;
        *DAT_14028940 = 0x140288b2;
        puVar5[1] = unaff_lr;
        iVar6 = DAT_14028948;
        uVar9 = bVar1 + 1;
        *pbVar4 = (char)uVar9 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x23) * -10;
        *(undefined4 *)(iVar6 + (uint)bVar1 * 4) = unaff_lr;
      }
      iVar6 = DAT_1402894c;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      *(undefined1 *)(iVar3 + param_1) = 0;
      *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) & ~(0x1000 << param_1 & 0xff000U);
      if (iVar8 == 0) {
        *DAT_14028940 = 0xffffffff;
      }
      pbVar4 = DAT_14028950;
      bVar1 = *DAT_14028950;
      *(undefined4 *)(DAT_14028954 + (uint)bVar1 * 4) = unaff_lr;
      uVar7 = bVar1 + 1;
      *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14028944 * (ulonglong)uVar7 >> 0x23) * -10
      ;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar8);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028958,0,param_1,iVar8,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1402895c,0,param_1,iVar8,param_4);
}

