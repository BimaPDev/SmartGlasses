/* FUN_2c4967a0 @ 0x2c4967a0 */

void FUN_2c4967a0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c49695c;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c49695c = 0x2c4967b2;
    puVar2[1] = unaff_lr;
  }
  puVar3 = DAT_2c496964;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *DAT_2c496960 = 2;
  *puVar3 = 0;
  if (iVar5 == 0) {
    *DAT_2c49695c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if (*DAT_2c496968 != 0) {
    FUN_2c6448f0();
  }
  uVar4 = DAT_2c49696c;
  iVar5 = FUN_2c490d3c();
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x163,DAT_2c49697c,DAT_2c496978,DAT_2c496974,uVar4,*DAT_2c496970);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x160,DAT_2c49697c,DAT_2c496978,DAT_2c496994,uVar4);
}

