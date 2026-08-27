/* FUN_2c5d1688 @ 0x2c5d1688 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d1688(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == 0) {
    return;
  }
  FUN_2c5c685c();
  iVar2 = FUN_2c5c6d5c();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5d16d8,0x430,_LAB_2c5d16d4,_LAB_2c5d16d0);
  }
  FUN_2c5d01a0(iVar6);
  FUN_2c5c685c();
  iVar2 = FUN_2c5c6b84();
  if (iVar2 == 0) {
    puVar5 = (uint *)(iVar6 + 0x30);
    uVar7 = 0x29;
    uVar1 = registry_lookup(0x1032);
LAB_2c5d160a:
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    if ((int)(uint)(uVar3 < 3) <= (int)uVar4) goto LAB_2c5d1616;
  }
  else {
    FUN_2c5229e8();
    puVar5 = (uint *)(iVar6 + 0x38);
    iVar2 = FUN_2c522634();
    if (iVar2 == 0) {
      uVar7 = 0x2a;
      uVar1 = registry_lookup(0x1033);
      goto LAB_2c5d160a;
    }
    uVar7 = 0x2a;
    uVar1 = registry_lookup(0x1064);
    uVar3 = *puVar5;
    uVar4 = *(uint *)(iVar6 + 0x3c);
    if ((int)(uint)(uVar3 < 3) <= (int)uVar4) goto LAB_2c5d1616;
  }
  FUN_2c5d1550(iVar6,uVar1);
  uVar1 = FUN_2c62bdd8(DAT_2c5d1684,3000,iVar6);
  *(undefined4 *)(iVar6 + 0x1c) = uVar1;
  FUN_2c62be70(uVar1,1);
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
LAB_2c5d1616:
  *puVar5 = uVar3 + 1;
  puVar5[1] = uVar4 + (0xfffffffe < uVar3);
  FUN_2c5e317c(uVar7);
  return;
}

