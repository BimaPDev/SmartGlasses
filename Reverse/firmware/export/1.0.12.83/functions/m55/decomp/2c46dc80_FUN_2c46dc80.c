/* FUN_2c46dc80 @ 0x2c46dc80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46dc80(uint param_1,undefined4 param_2,undefined2 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c46ddf4;
  param_1 = param_1 & 0xff;
  if (((0x33 < param_1 - 0x15) && (0x1a < (param_1 + 0x65 & 0xff))) ||
     (pbVar3 = (byte *)FUN_2c47245c(3,param_3), pbVar3 == (byte *)0x0)) goto LAB_2c46dcac;
  FUN_2c674668(pbVar3,param_2,param_3);
  if (param_1 < 0x26) {
    if (param_1 < 0x20) goto LAB_2c46dd0e;
LAB_2c46dd42:
    iVar4 = FUN_2c47af88(1,pbVar3,param_3,param_1);
  }
  else {
    if ((param_1 + 0x62 & 0xff) < 0x13) {
      switch(param_1) {
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xad:
        goto code_r0x2c46dd54;
      default:
        break;
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xb0:
        goto LAB_2c46dd42;
      }
    }
LAB_2c46dd0e:
    iVar4 = FUN_2c4969c8();
    if (iVar4 != 0) {
      FUN_2c4969dc(0x12,0xf);
    }
    iVar4 = func_0x2c47aaf8(1,pbVar3,param_3,param_1);
  }
  if (iVar4 == -1) {
LAB_2c46dd26:
    puVar2 = DAT_2c4726d4;
    piVar1 = DAT_2c4726d0;
    if (*_LAB_2c46ddf4 == iStack_1c) {
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      if (*DAT_2c4726d0 == 0) {
        uStack_20 = DAT_2c4726e0;
        iStack_1c = DAT_2c4726dc;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4);
      }
      FUN_2c644044(*DAT_2c4726d4,0xffffffff);
      FUN_2c47231c(*piVar1,DAT_2c4726d8,3,pbVar3);
      FUN_2c644080(*puVar2);
      return;
    }
    goto LAB_2c46ddee;
  }
LAB_2c46dcac:
  if (*_LAB_2c46ddf4 == iStack_1c) {
    return;
  }
LAB_2c46ddee:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
code_r0x2c46dd54:
  iVar4 = FUN_2c4969c8();
  if (iVar4 != 0) {
    FUN_2c4969dc(0x12,0xf);
  }
  iVar4 = (uint)pbVar3[1] * 0x10000 + (uint)*pbVar3 * 0x1000000 + (uint)pbVar3[3] +
          (uint)pbVar3[2] * 0x100;
  if (iVar4 != 0) {
    iVar6 = (uint)pbVar3[5] + (uint)pbVar3[4] * 0x100;
    iVar5 = FUN_2c47245c(3,iVar6);
    if (iVar5 == 0) goto LAB_2c46dcac;
    FUN_2c674668(iVar5,iVar4,iVar6);
    uStack_20._3_1_ = (undefined1)iVar4;
    uStack_20._0_3_ =
         CONCAT12((char)((uint)iVar4 >> 8),
                  CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18)));
    FUN_2c4f7174(0xae,&uStack_20,4);
    iVar4 = func_0x2c47aaf8(1,iVar5,iVar6,param_1);
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(3,iVar5);
    }
    goto LAB_2c46dd26;
  }
  goto LAB_2c46dcac;
}

