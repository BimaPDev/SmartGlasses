/* FUN_2c4b773c @ 0x2c4b773c */

void FUN_2c4b773c(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = DAT_2c4b7840;
  iVar1 = DAT_2c4b783c;
  uVar4 = *param_1;
  uVar6 = *param_2;
  uVar7 = *param_3;
  for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1) {
    if (uVar4 == 0) goto LAB_2c4b779e;
    uVar3 = FUN_2c49ad00(uVar4);
    uVar8 = 1 << (uVar5 & 0xff);
    if ((uVar6 & uVar8) != 0) {
      while( true ) {
        uVar5 = uVar5 + 1;
        uVar8 = 1 << (uVar5 & 0xff);
        if ((uVar8 & uVar6) == 0) break;
        if (uVar5 == 6) goto LAB_2c4b7790;
      }
      if (uVar5 == 6) goto LAB_2c4b7790;
    }
    uVar7 = uVar7 | uVar8;
    uVar8 = uVar3 & 0xff;
    uVar6 = uVar6 | uVar7;
    uVar4 = uVar4 & ~(1 << uVar8);
    if ((0xff00 >> uVar8) << 0x1f < 0) {
      uVar3 = FUN_2c4bfe18(uVar8);
      *(uint *)(iVar2 + 200) =
           *(uint *)(iVar2 + 200) & ~(7 << (uVar5 * 3 & 0xff)) | (uVar3 & 7) << (uVar5 * 3 & 0xff);
      *(uint *)(iVar2 + 0xc4) = 0x10 << (uVar5 & 0xff) | *(uint *)(iVar2 + 0xc4);
    }
    else {
      *(uint *)(iVar1 + uVar5 * 4) = (uVar3 & 7) << 1 | *(uint *)(iVar1 + uVar5 * 4) & 0xfffffff1;
      *(uint *)(iVar2 + 0xc4) = *(uint *)(iVar2 + 0xc4) & ~(0x10 << (uVar5 & 0xff));
    }
  }
  if (uVar4 != 0) {
LAB_2c4b7790:
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b7838,DAT_2c4b7834,uVar4,uVar6);
  }
LAB_2c4b779e:
  *param_1 = uVar4;
  *param_2 = uVar6;
  *param_3 = uVar7;
  return;
}

