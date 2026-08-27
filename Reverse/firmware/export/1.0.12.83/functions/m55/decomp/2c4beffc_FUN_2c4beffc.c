/* FUN_2c4beffc @ 0x2c4beffc */

void FUN_2c4beffc(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  iVar4 = DAT_2c4bf088;
  uVar6 = param_1 >> 4;
  if (0x1f < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bf09c,uVar6);
  }
  uVar7 = param_1 & 0xf;
  if (-1 < (int)(param_1 << 0x1c)) {
    if (*(char *)(DAT_2c4bf088 + uVar6 * 8 + uVar7) != '\0') {
      FUN_2c4bedd8();
      puVar2 = DAT_2c4bf08c;
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 != 0x40) {
        *DAT_2c4bf08c = 0x2c4bf032;
        puVar2[1] = unaff_lr;
      }
      iVar3 = DAT_2c4bf090;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      *(undefined1 *)(iVar4 + uVar6 * 8 + uVar7) = 0;
      iVar4 = *(int *)(iVar3 + uVar6 * 4);
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & ~(0x1000 << uVar7 & 0xff000U);
      if (iVar5 == 0) {
        *DAT_2c4bf08c = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar5);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bf094,uVar6,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4bf098,uVar6,uVar7);
}

