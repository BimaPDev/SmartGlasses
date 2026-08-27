/* FUN_2c47d590 @ 0x2c47d590 */

void FUN_2c47d590(char *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = *DAT_2c47d648;
  if ((*param_1 == '\0') && (param_1[1] == '\x02')) {
    if (param_1[2] != '\x02') {
      if (*DAT_2c47d648 == local_c) {
        uVar3 = param_2 - 2U & 0xffff;
        local_14 = *DAT_2c47d54c;
        if (*DAT_2c47d548 != '\0') {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x3e,DAT_2c47d560,DAT_2c47d55c,DAT_2c47d558,uVar3);
        }
        if (param_1[2] == '\x02') {
          local_2c = FUN_2c473cb4(param_1 + 3,uVar3 - 1 & 0xffff,0);
          if (local_2c == 0) {
            FUN_2c6741e8(0x710,DAT_2c47d564);
          }
          else {
            if (*(int *)(local_2c + 0xc) == 0) {
              FUN_2c47a698();
            }
            else if (*(int *)(local_2c + 0xc) == 0xc) {
                    /* WARNING: Subroutine does not return */
              TRACE(4,0x92,DAT_2c47d560,DAT_2c47d55c,DAT_2c47d580);
            }
            FUN_2c473cc0(&local_2c);
          }
        }
        else {
          if (param_1[2] != '\x01') {
            if (*DAT_2c47d54c == local_14) {
              FUN_2c6741e8(0x711,DAT_2c47d554,DAT_2c47d550);
              return;
            }
            goto LAB_2c47d544;
          }
          iVar2 = FUN_2c47d220(&local_2c,param_1 + 3,uVar3 - 1 & 0xffff);
          if (iVar2 != 0) {
            if ((local_2c & 0xff) == 3) {
              iVar2 = FUN_2c47d220(&local_2c,local_24,local_20);
              puVar1 = DAT_2c47d578;
              if (iVar2 != 0) {
                switch(local_2c >> 8 & 0xff) {
                case 3:
                  if ((code *)*DAT_2c47d568 != (code *)0x0) {
                    (*(code *)*DAT_2c47d568)(local_24,local_20,local_18 & 0xff);
                  }
                  if (local_2c._2_1_ != '\0') {
                    FUN_2c47af88(4,0,local_28);
                  }
                  break;
                case 4:
                case 5:
                case 7:
                  FUN_2c47d1ec(&local_2c);
                  break;
                case 6:
                  if ((code *)*DAT_2c47d578 != (code *)0x0) {
                    (*(code *)*DAT_2c47d578)(0);
                    *puVar1 = 0;
                  }
                  break;
                default:
                  FUN_2c6741e8(0x711,DAT_2c47d57c,DAT_2c47d550);
                  break;
                case 9:
                  if ((code *)*DAT_2c47d56c != (code *)0x0) {
                    (*(code *)*DAT_2c47d56c)(DAT_2c47d574);
                  }
                  break;
                case 10:
                  if ((code *)*DAT_2c47d56c != (code *)0x0) {
                    (*(code *)*DAT_2c47d56c)(DAT_2c47d570);
                  }
                }
              }
            }
            else if ((local_2c & 0xff) == 5) {
              FUN_2c47d954(local_24,local_20);
            }
          }
        }
        if (*DAT_2c47d54c == local_14) {
          return;
        }
LAB_2c47d544:
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      goto LAB_2c47d644;
    }
    local_10 = FUN_2c473cb4(param_1 + 3,param_2 + -3);
    if (local_10 != 0) {
      local_14 = *(undefined4 *)(local_10 + 0xc);
      local_18 = DAT_2c47d64c;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x137,DAT_2c47d654,DAT_2c47d650);
    }
    FUN_2c6741e8(0x710,DAT_2c47d658);
  }
  if (*DAT_2c47d648 == local_c) {
    return;
  }
LAB_2c47d644:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

