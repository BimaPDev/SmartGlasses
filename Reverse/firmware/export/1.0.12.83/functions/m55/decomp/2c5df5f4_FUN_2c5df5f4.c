/* FUN_2c5df5f4 @ 0x2c5df5f4 */

undefined4 FUN_2c5df5f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c62a470();
  iVar2 = FUN_2c62a47c();
  FUN_2c62a470();
  iVar3 = FUN_2c62a4a0();
  switch(param_2) {
  case 1:
    param_3[3] = iVar2;
    param_3[0x10] = iVar2;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[4] = 0;
    param_3[0xf] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    break;
  case 2:
    param_3[3] = -iVar2;
    param_3[4] = 0;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = -iVar2;
    break;
  case 3:
    param_3[3] = iVar3;
    param_3[0x10] = iVar3;
    *(undefined1 *)(param_3 + 2) = 2;
    param_3[4] = 0;
    param_3[0xf] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    goto LAB_2c5df68c;
  case 4:
    param_3[3] = -iVar3;
    param_3[4] = 0;
    *(undefined1 *)(param_3 + 2) = 2;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = -iVar3;
    goto LAB_2c5df68c;
  case 5:
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[8] = -iVar2;
    param_3[3] = iVar2;
    param_3[4] = 0;
    param_3[0xb] = -iVar2;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = iVar2;
    break;
  case 6:
    param_3[8] = iVar2;
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[3] = -iVar2;
    param_3[4] = 0;
    param_3[0xb] = iVar2;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = -iVar2;
    break;
  case 7:
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 2) = 2;
    param_3[8] = -iVar3;
    param_3[3] = iVar3;
    param_3[4] = 0;
    param_3[0xb] = -iVar3;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = iVar3;
    goto LAB_2c5df68c;
  case 8:
    param_3[8] = iVar3;
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 2) = 2;
    param_3[3] = -iVar3;
    param_3[4] = 0;
    param_3[0xb] = iVar3;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = -iVar3;
LAB_2c5df68c:
    uVar1 = DAT_2c5df790;
    *param_3 = DAT_2c5df78c;
    param_3[1] = uVar1;
    return 1;
  case 9:
    param_3[4] = 0xff;
    *(undefined1 *)(param_3 + 2) = 0;
    param_3[3] = 0;
    param_3[7] = 0xff;
    param_3[8] = 0xff;
    param_3[0xb] = 0xff;
    param_3[0xc] = 0xff;
    param_3[0xf] = 0xff;
    param_3[0x10] = 0;
    goto LAB_2c5df732;
  case 10:
    param_3[5] = DAT_2c5df79c;
    param_3[6] = 0x32;
    uVar1 = DAT_2c5df7a0;
    *(undefined1 *)(param_3 + 2) = 0;
    param_3[9] = uVar1;
    param_3[0xd] = DAT_2c5df7a4;
    uVar1 = DAT_2c5df7a8;
    param_3[3] = 0;
    param_3[4] = 100;
    param_3[7] = 100;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 100;
    param_3[0xf] = 100;
    param_3[0x10] = 0;
    param_3[0x11] = uVar1;
    param_3[0x12] = 0x32;
LAB_2c5df732:
    uVar1 = DAT_2c5df798;
    *param_3 = DAT_2c5df794;
    param_3[1] = uVar1;
    return 1;
  case 0xb:
    FUN_2c674268(param_3,0,0x8c);
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5df7b4,0xec,DAT_2c5df7b0,DAT_2c5df7ac,param_2);
  }
  uVar1 = DAT_2c5df788;
  *param_3 = DAT_2c5df784;
  param_3[1] = uVar1;
  return 1;
}

