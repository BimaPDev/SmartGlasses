/* FUN_2c4ee228 @ 0x2c4ee228 */

void FUN_2c4ee228(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_84 [3];
  undefined1 uStack_81;
  uint uStack_80;
  int iStack_2c;
  
  uVar5 = 0;
  iStack_2c = *DAT_2c4ee2e8;
  FUN_2c61314c(auStack_84,param_2,param_3,0);
  uStack_81 = 0xff;
LAB_2c4ee250:
  uVar3 = 0;
  uVar6 = 0xffffff;
  if ((uVar5 & 1) != 0) {
    uVar6 = 0;
  }
  iVar4 = (int)(short)((short)uVar5 * 0x78);
  do {
    iVar2 = (int)(short)(((short)uVar3 + (short)(uVar3 << 2)) * 0x20);
    if (uVar3 == 0) {
      uStack_80 = uVar6 | 0xff000000;
      uVar1 = FUN_2c4eda80();
      FUN_2c639940(uVar1,iVar2,iVar4,0xa0,0x78,auStack_84);
    }
    else {
      if (uVar6 == 0xffffff) {
        uStack_80 = 0xff000000;
        uVar6 = 0;
      }
      else {
        uStack_80 = 0xffffffff;
        uVar6 = 0xffffff;
      }
      uVar1 = FUN_2c4eda80();
      FUN_2c639940(uVar1,iVar2,iVar4,0xa0,0x78,auStack_84);
      if ((uVar3 & 0xff) == 3) break;
    }
    uVar3 = uVar3 + 1;
  } while( true );
  uVar5 = uVar5 + 1;
  if (uVar5 == 4) {
    if (*DAT_2c4ee2e8 == iStack_2c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  goto LAB_2c4ee250;
}

