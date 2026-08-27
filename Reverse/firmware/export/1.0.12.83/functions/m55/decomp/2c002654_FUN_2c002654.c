/* FUN_2c002654 @ 0x2c002654 */

void FUN_2c002654(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = DAT_2c0026c4;
  iVar2 = DAT_2c0026b8;
  uVar7 = *(uint *)(DAT_2c0026b8 + 0xa8);
  uVar6 = DAT_2c0026c0 | uVar7;
  *(uint *)(DAT_2c0026b8 + 0xa8) = DAT_2c0026bc | uVar7;
  *(uint *)(iVar2 + 0xa8) = uVar6;
  uVar4 = DAT_2c0026cc;
  uVar6 = DAT_2c0026c8;
  *(uint *)(iVar2 + 0xa8) = uVar3 | uVar7;
  puVar5 = DAT_2c0026d0;
  *(uint *)(iVar2 + 0xa8) = uVar6 | uVar7;
  *(uint *)(iVar2 + 0xa8) = uVar7 | uVar4;
  uVar1 = *puVar5;
  FUN_2c003528(uVar1,1);
  FUN_2c003708(uVar1,1);
  *(uint *)(iVar2 + 0x168) =
       *(uint *)(iVar2 + 0x168) | (*DAT_2c0026d4 & 0x7ff) << 0xb | *DAT_2c0026d4 & 0x7ff |
       0xca000000;
  return;
}

