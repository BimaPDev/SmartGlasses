/* FUN_1408c3a0 @ 0x1408c3a0 */

undefined4 FUN_1408c3a0(undefined4 param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = DAT_1408c4d8;
  uVar2 = DAT_1408c4d4;
  if (param_4 == 0) {
    return 0;
  }
  do {
    bVar1 = param_3[1];
    param_4 = param_4 + (0xfffe - (uint)bVar1) & 0xffff;
    switch(*param_3 & 0x7f) {
    case 1:
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_3 + 2);
      *param_2 = *param_2 | 1;
      break;
    case 2:
      *(undefined2 *)(param_2 + 3) = *(undefined2 *)(param_3 + 2);
      *param_2 = *param_2 | 2;
      break;
    case 3:
      uVar4 = *(undefined4 *)(param_3 + 2);
      uVar6 = *(undefined4 *)(param_3 + 6);
      uVar5 = *(undefined4 *)(param_3 + 10);
      *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(param_3 + 0xe);
      *(undefined4 *)(param_2 + 5) = uVar4;
      *(undefined4 *)(param_2 + 9) = uVar6;
      *(undefined4 *)(param_2 + 0xd) = uVar5;
      *(undefined4 *)(param_2 + 0x15) = *(undefined4 *)(param_3 + 0x12);
      *(undefined2 *)(param_2 + 0x19) = *(undefined2 *)(param_3 + 0x16);
      *param_2 = *param_2 | 4;
      break;
    case 4:
      uVar4 = *(undefined4 *)(param_3 + 6);
      *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)(param_2 + 0x1f) = uVar4;
      param_2[0x23] = param_3[10];
      *param_2 = *param_2 | 8;
      break;
    case 5:
      param_2[0x24] = param_3[2];
      *param_2 = *param_2 | 0x10;
      break;
    default:
      if (-1 < (int)((uint)*param_3 << 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1408c4dc,param_1,DAT_1408c4d8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,uVar2,param_1,uVar3);
    }
    param_3 = param_3 + bVar1 + 2;
  } while (param_4 != 0);
  return 0;
}

