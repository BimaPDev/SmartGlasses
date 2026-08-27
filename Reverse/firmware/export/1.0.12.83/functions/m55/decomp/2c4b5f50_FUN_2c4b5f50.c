/* FUN_2c4b5f50 @ 0x2c4b5f50 */

void FUN_2c4b5f50(ushort param_1,uint param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort local_2e;
  int local_2c;
  
  puVar6 = DAT_2c4b6050;
  local_2c = *DAT_2c4b604c;
  uVar4 = 0;
  puVar5 = DAT_2c4b6050;
  bVar2 = false;
  do {
    while (bVar3 = bVar2, (1 << (uVar4 & 0xff) & param_2) != 0) {
      uVar1 = *puVar5;
      if (param_3 == 0) {
        *puVar5 = uVar1 & ~param_1;
        if ((uVar1 == 0) || ((uVar1 & ~param_1) != 0)) break;
LAB_2c4b5fa4:
        if (uVar4 != 4) goto LAB_2c4b5fa8;
LAB_2c4b6028:
        FUN_2c4b6f1c(DAT_2c4b6050[4] != 0);
LAB_2c4b5fac:
        uVar7 = uVar4 * 0x10 + 1 & 0xffff | 0x1000;
      }
      else {
        if (uVar1 != 0) {
          *puVar5 = uVar1 | param_1;
          break;
        }
        *puVar5 = param_1;
        if (bVar3) goto LAB_2c4b5fa4;
        FUN_2c4b6ec8(1);
        if (uVar4 == 4) goto LAB_2c4b6028;
LAB_2c4b5fa8:
        if (uVar4 != 5) goto LAB_2c4b5fac;
        uVar7 = 0x105e;
      }
      FUN_2c673e88(uVar7,&local_2e);
      if (*puVar5 == 0) {
        local_2e = local_2e & 0xfffe;
      }
      else {
        local_2e = local_2e | 1;
      }
      uVar4 = uVar4 + 1;
      FUN_2c673d68(uVar7);
      bVar3 = true;
      puVar5 = puVar5 + 1;
      bVar2 = true;
      if (uVar4 == 6) goto LAB_2c4b5fea;
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 1;
    bVar2 = bVar3;
  } while (uVar4 != 6);
LAB_2c4b5fea:
  if ((param_3 != 1) && (bVar3)) {
    do {
      puVar5 = puVar6 + 1;
      if (*puVar6 != 0) goto LAB_2c4b6002;
      puVar6 = puVar5;
    } while (DAT_2c4b6054 != puVar5);
    FUN_2c4b6ec8();
  }
LAB_2c4b6002:
  if (*DAT_2c4b604c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

