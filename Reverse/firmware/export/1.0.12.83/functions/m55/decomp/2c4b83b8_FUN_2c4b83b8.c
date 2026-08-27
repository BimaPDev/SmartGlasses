/* FUN_2c4b83b8 @ 0x2c4b83b8 */

undefined4 FUN_2c4b83b8(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  int local_2c;
  
  puVar2 = DAT_2c4b869c;
  if (param_2 != 0) {
    if ((int)(DAT_2c4b869c[0x39] << 0x16) < 0) {
      FUN_2c4b7f30(*(int *)(DAT_2c4b86c4 + (uint)DAT_2c4b86c0[1] * 0xc) * 200,0);
      puVar2[0x39] = puVar2[0x39] | 0x10;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xea3,DAT_2c4b86b4,DAT_2c4b86b0,DAT_2c4b86ac,*DAT_2c4b86a8);
  }
  if ((int)(DAT_2c4b869c[0x39] << 0x17) < 0) {
    FUN_2c4b7d70(*(int *)(DAT_2c4b86c8 + (uint)*DAT_2c4b86c0 * 0x10) * 200);
    puVar2[0x39] = puVar2[0x39] | 8;
    puVar2[0x39] = puVar2[0x39] | 1;
    uVar5 = *DAT_2c4b869c;
  }
  else {
    uVar5 = *DAT_2c4b869c;
  }
  if (((int)(uVar5 << 0x1e) < 0) && (uVar5 = *DAT_2c4b86a0, (uVar5 & 0xc0) != 0)) {
    if ((int)(uVar5 << 0x19) < 0) {
      DAT_2c4b869c[0x27] = DAT_2c4b869c[0x27] | 1;
    }
    if ((int)(uVar5 << 0x18) < 0) {
      *(uint *)(DAT_2c4b86fc + 0xa0) = *(uint *)(DAT_2c4b86fc + 0xa0) | 1;
    }
  }
  pcVar4 = DAT_2c4b86b8;
  puVar2 = DAT_2c4b869c;
  if ((int)(DAT_2c4b869c[0x55] << 0x13) < 0) {
    DAT_2c4b869c[0x55] = DAT_2c4b869c[0x55] & 0xffffefff;
    puVar2[0x56] = puVar2[0x56] & 0xffffefff;
    FUN_2c673b08(2);
    puVar2[0x2d] = puVar2[0x2d] & 0xffdfffff;
    FUN_2c673b08(2);
    uVar5 = DAT_2c4b86bc;
    puVar2[0x2d] = puVar2[0x2d] & DAT_2c4b86bc;
    puVar2[0x2e] = puVar2[0x2e] & uVar5;
    puVar2[0x2d] = puVar2[0x2d] | 0x200000;
    FUN_2c673b08(2);
    puVar2[0x55] = puVar2[0x55] | 0x1000;
    puVar2[0x56] = puVar2[0x56] | 0x1000;
    FUN_2c673b08(2);
    if ((int)pcVar4[1] == (int)*pcVar4) {
      FUN_2c4b7a4c(3,(int)pcVar4[1]);
    }
    else {
      FUN_2c4b7a4c(1);
      FUN_2c4b7a4c(2,(int)pcVar4[1]);
    }
  }
  puVar2 = DAT_2c4b869c;
  DAT_2c4b869c[1] = DAT_2c4b869c[1] | 0x100;
  FUN_2c673b08(2);
  puVar2[1] = puVar2[1] & 0xfffffeff;
  if (param_3 != 0) {
    puVar2[2] = puVar2[2] & 0xffffff0f | 0x30;
    *puVar2 = *puVar2 | 0x1000;
    local_2c = 0;
    do {
      local_2c = local_2c + 1;
    } while (local_2c < 0x32);
  }
  pbVar3 = DAT_2c4b86a4;
  puVar2 = DAT_2c4b869c;
  *DAT_2c4b869c = *DAT_2c4b869c | 0x400;
  bVar1 = *pbVar3;
  if (bVar1 == 0) {
    puVar2[0x2f] = puVar2[0x2f] | 2;
  }
  else if ((int)((uint)bVar1 << 0x1d) < 0) {
    return 0;
  }
  *pbVar3 = bVar1 | 4;
  return 0;
}

