/* FUN_2c49b970 @ 0x2c49b970 */

void FUN_2c49b970(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte local_31;
  int local_30;
  int local_2c;
  
  iVar8 = DAT_2c49bc18;
  local_2c = *DAT_2c49bc14;
  local_30 = 0;
  iVar3 = FUN_2c49d1a8(&local_30,param_2,0);
  pcVar2 = DAT_2c49bc48;
  if (*(int *)(iVar8 + 4) == 1) {
    if (*DAT_2c49bc1c == 0) {
      FUN_2c49b620(2,1);
      *DAT_2c49bc38 = 0xffffffff;
    }
    else if (*DAT_2c49bc20 < 0) {
      if (((*DAT_2c49bc48 != '\0') && (iVar7 = FUN_2c49b318(0x1d,&local_31), iVar7 == 0)) &&
         ((char)local_31 < '\0')) {
        local_31 = local_31 & 0x7f;
        FUN_2c49b2c0(0x1d);
      }
      if (iVar3 < 0) {
        FUN_2c49b778(2,0);
      }
      else {
        if (local_30 < 0x1e) {
          uVar6 = 3;
        }
        else if (local_30 < 0x6f) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
          if (0x1b8 < local_30) {
            if (local_30 - 0x1b9U < 0x82) {
              uVar6 = 2;
            }
            else {
              uVar6 = 3;
            }
          }
        }
        uVar4 = FUN_2c499ed4();
        iVar3 = FUN_2c499ee0();
        if (iVar3 == 0) {
          if (*DAT_2c49bc24 == 0) {
            *DAT_2c49bc24 = 1;
            FUN_2c49b35c(0x12,0xff,0x2d);
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x3df,DAT_2c49bc2c,DAT_2c49bc34,DAT_2c49bc40,uVar4,0);
          }
        }
        else if (*DAT_2c49bc24 == 1) {
          if (*DAT_2c49bc38 < 3) {
            uVar6 = *(uint *)(DAT_2c49bc28 + *DAT_2c49bc38 * 0x10 + 8);
            FUN_2c49b35c(0x12,0xff,(uVar6 & ~((int)uVar6 >> 0x1f) & 0x1ff) >> 1);
          }
          uVar1 = DAT_2c49bc3c;
          *DAT_2c49bc24 = 0;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x3db,DAT_2c49bc2c,DAT_2c49bc34,uVar1,uVar4,iVar3);
        }
        uVar5 = *DAT_2c49bc38;
        if (uVar6 != uVar5) {
          if (uVar6 != 3) {
            iVar8 = *(int *)(DAT_2c49bc28 + uVar6 * 0x10 + 8);
            if ((iVar3 == 0) && (0x59 < iVar8)) {
              iVar8 = 0x5a;
            }
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x405,DAT_2c49bc2c,DAT_2c49bc34,DAT_2c49bc30,local_30,uVar5,uVar6,
                  *(undefined4 *)(DAT_2c49bc28 + uVar6 * 0x10 + 0xc),iVar8,uVar4,iVar3);
          }
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x3fb,DAT_2c49bc2c,DAT_2c49bc34,DAT_2c49bc44,local_30,uVar5,3);
        }
        if (local_30 < 0x1b9) {
          if (local_30 < 0x1f) {
            uVar6 = 0;
          }
          else if (uVar6 == 3) {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 2;
        }
        iVar7 = DAT_2c49bc28 + uVar6 * 0x10;
        iVar3 = FUN_2c49d108();
        iVar7 = *(int *)(iVar7 + 0xc);
        if (iVar7 < iVar3) {
          FUN_2c49b620(2,0);
        }
        else if (iVar3 < iVar7 + -0x32) {
          FUN_2c49b620(2,1);
        }
        if (((*(char *)(iVar8 + 0xc) != '\0') && (*pcVar2 != '\0')) &&
           ((iVar8 = FUN_2c49b318(0x1d,&local_31), iVar8 == 0 && ((int)((uint)local_31 << 0x19) < 0)
            ))) {
          local_31 = local_31 & 0xbf;
          FUN_2c49b2c0(0x1d);
        }
      }
    }
    else {
      *DAT_2c49bc38 = 0xffffffff;
    }
  }
  if (*DAT_2c49bc14 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

