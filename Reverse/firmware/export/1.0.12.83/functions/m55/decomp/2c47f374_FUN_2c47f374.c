/* FUN_2c47f374 @ 0x2c47f374 */

void FUN_2c47f374(int param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  iVar5 = *DAT_2c47f40c;
  if (param_3 != (byte *)0x0) {
    pbVar8 = (byte *)(param_2 + 0xf);
    do {
      uVar1 = *(undefined4 *)(pbVar8 + -0xf);
      uVar2 = *(undefined4 *)(pbVar8 + -0xb);
      uVar3 = *(undefined4 *)(pbVar8 + -7);
      uVar6 = *(undefined4 *)(pbVar8 + -3);
      FUN_2c47ee9c(pbVar8 + -0xf,param_1);
      pbVar7 = pbVar8 + -0x10;
      pbVar4 = (byte *)(param_1 + 0xef);
      do {
        pbVar7 = pbVar7 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar7 = *pbVar7 ^ *pbVar4;
      } while (pbVar8 != pbVar7);
      pbVar8 = pbVar8 + 0x10;
      *(undefined4 *)(param_1 + 0xf0) = uVar1;
      *(undefined4 *)(param_1 + 0xf4) = uVar2;
      *(undefined4 *)(param_1 + 0xf8) = uVar3;
      *(undefined4 *)(param_1 + 0xfc) = uVar6;
    } while (pbVar8 + (-0xf - param_2) < param_3);
  }
  if (*DAT_2c47f40c == iVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

