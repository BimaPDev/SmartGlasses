/* FUN_2c00f09c @ 0x2c00f09c */

int FUN_2c00f09c(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  do {
    FUN_2c008f74(0x2338,0x310);
    FUN_2c013884(0x3c);
    do {
      iVar2 = FUN_2c00d60c();
      if ((iVar2 != 0) || (unaff_r7 == 1)) {
        *DAT_2c00f10c = (char)unaff_r5;
        FUN_2c008f74(0x2338,0x10);
        if (unaff_r6 == 0) {
          *DAT_2c00f108 = 0xffffffff;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(unaff_r6);
        }
        if (iVar2 == 0) {
          FUN_2c00b820(4,0x104c,DAT_2c00f104,DAT_2c00f100);
        }
        else {
          FUN_2c00b820(4,0x104a,DAT_2c00eecc,DAT_2c00eec8);
        }
        if (*DAT_2c00eeac == in_stack_0000001c) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c0084a8();
      }
      unaff_r7 = 1;
      FUN_2c008e4c(0x2073,(int)&stack0x00000018 + 2);
      if ((in_stack_00000018._2_2_ & 0xf) == 0xf) {
        uVar3 = unaff_r5 - 4;
        unaff_r5 = uVar3 & 0xffff;
        uVar3 = uVar3 & 0xf;
        goto LAB_2c00f082;
      }
    } while ((in_stack_00000018._2_2_ & 0xe) != 0);
    unaff_r5 = unaff_r5 + 4 & 0xffff;
    if (0xe < unaff_r5) {
      unaff_r5 = 0xf;
    }
    uVar3 = unaff_r5 & 0xfff;
LAB_2c00f082:
    FUN_2c008f74(0x20ad,uVar3 << 4 | 0xd500);
    FUN_2c008f74(0x2338,0x210);
    FUN_2c013884(10);
  } while( true );
}

