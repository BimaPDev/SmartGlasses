/* FUN_2c641574 @ 0x2c641574 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c641574(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = FUN_2c602d28();
  puVar2 = _LAB_2c6415b4;
  uVar5 = *_LAB_2c6415b0;
  *_LAB_2c6415b4 = uVar4;
  func_0x2c5ff5b8(uVar5);
  uVar5 = *puVar2;
  FUN_2c62a470();
  uVar4 = FUN_2c5fee44();
  FUN_2c602f64(uVar5,uVar4);
  FUN_2c62a470();
  iVar6 = FUN_2c5fee44();
  iVar3 = _LAB_2c6415b8;
  FUN_2c606bc8();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(*(int *)(iVar6 + 8) + 0x1a);
    if ((bVar1 & 0x3f) == 0x3f) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c602514,0xf9,DAT_2c602510,DAT_2c602518,0xd,iVar6,iVar3,0);
    }
    *(byte *)(*(int *)(iVar6 + 8) + 0x1a) = bVar1 & 0xc0 | bVar1 + 1 & 0x3f;
    iVar7 = *(int *)(iVar6 + 8);
    uVar4 = FUN_2c62bebc(*(undefined4 *)(iVar7 + 0xc),(*(byte *)(iVar7 + 0x1a) & 0x3f) * 0xc);
    *(undefined4 *)(iVar7 + 0xc) = uVar4;
    *(int *)(*(int *)(*(int *)(iVar6 + 8) + 0xc) +
            (short)(*(byte *)(*(int *)(iVar6 + 8) + 0x1a) & 0x3f) * 0xc + -0xc) = iVar3;
    *(undefined1 *)
     ((short)(*(byte *)(*(int *)(iVar6 + 8) + 0x1a) & 0x3f) * 0xc +
      *(int *)(*(int *)(iVar6 + 8) + 0xc) + -4) = 0xd;
    *(undefined4 *)
     ((short)(*(byte *)(*(int *)(iVar6 + 8) + 0x1a) & 0x3f) * 0xc +
      *(int *)(*(int *)(iVar6 + 8) + 0xc) + -8) = 0;
    iVar3 = *(int *)(*(int *)(iVar6 + 8) + 0xc) +
            (short)(*(byte *)(*(int *)(iVar6 + 8) + 0x1a) & 0x3f) * 0xc + -0xc;
  }
  return iVar3;
}

