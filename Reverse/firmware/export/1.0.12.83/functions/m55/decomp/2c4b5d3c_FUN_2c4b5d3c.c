/* FUN_2c4b5d3c @ 0x2c4b5d3c */

/* WARNING: Removing unreachable block (ram,0x2c4b599c) */
/* WARNING: Removing unreachable block (ram,0x2c4b5a1e) */
/* WARNING: Removing unreachable block (ram,0x2c4b5a02) */
/* WARNING: Removing unreachable block (ram,0x2c4b5a06) */
/* WARNING: Removing unreachable block (ram,0x2c4b5a6a) */

undefined4 FUN_2c4b5d3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = DAT_2c4b5aac;
  cVar1 = *(char *)(DAT_2c4b5aa8 + param_1);
  uVar4 = (uint)cVar1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b5ab4,DAT_2c4b5ab0,0,param_1,param_4);
  }
  DAT_2c4b5aac[uVar4 * 0x1c + 0xd] = 1;
  if ((uVar4 & 0xfffffffd) == 1) {
    if (uVar4 == 1) {
      FUN_2c4b6b00(pbVar3[0x3d],*(undefined4 *)(pbVar3 + 0x38),1);
    }
    else if (cVar1 == '\x03') {
      FUN_2c4b6b58(pbVar3[0x75],*(undefined4 *)(pbVar3 + 0x70));
    }
  }
  FUN_2c4b83b8(0,cVar1,pbVar3[uVar4 * 0x1c + 0x20] & 1);
  switch(uVar4) {
  case 0:
    if ((int)((uint)*pbVar3 << 0x1e) < 0) {
      return 0;
    }
    bVar2 = pbVar3[0x45];
    break;
  case 1:
    if ((int)((uint)*pbVar3 << 0x1e) < 0) {
      return 0;
    }
    bVar2 = pbVar3[0x61];
    goto joined_r0x2c4b5a66;
  case 2:
    if ((int)((uint)*pbVar3 << 0x1e) < 0) {
      return 0;
    }
    bVar2 = pbVar3[0xd];
    break;
  case 3:
    if ((int)((uint)*pbVar3 << 0x1e) < 0) {
      return 0;
    }
    bVar2 = pbVar3[0x29];
    goto joined_r0x2c4b5a3e;
  case 4:
    if ((int)((uint)*pbVar3 << 0x1e) < 0) {
      return 0;
    }
    if (pbVar3[0xd] != 0) {
      return 0;
    }
    bVar2 = pbVar3[0x45];
joined_r0x2c4b5a3e:
    if (bVar2 != 0) {
      return 0;
    }
  default:
    goto switchD_2c4b59a4_default;
  }
  if (bVar2 == 0) {
    bVar2 = pbVar3[0x7d];
joined_r0x2c4b5a66:
    if (bVar2 == 0) {
switchD_2c4b59a4_default:
      if (param_1 == 0) {
        FUN_2c4b6bc8(1);
      }
      FUN_2c4b8340(0,param_1);
    }
  }
  return 0;
}

