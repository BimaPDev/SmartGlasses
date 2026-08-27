/* FUN_2c644b34 @ 0x2c644b34 */

undefined1 * FUN_2c644b34(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 local_2c;
  
  iVar2 = DAT_2c644ce0;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_2c644c64:
    FUN_2c643ba8(0,0xfffffffc);
    return (undefined1 *)0x0;
  }
  iVar6 = (param_2 + 3U & 0xfffffffc) + 0xc;
  if ((iVar6 != 0) && ((uint)(LZCOUNT(iVar6) + LZCOUNT(param_1)) < 0x20)) goto LAB_2c644c64;
  uVar9 = iVar6 * param_1;
  if (param_3 == (undefined4 *)0x0) {
    bVar1 = true;
    uVar5 = 0;
    local_2c = 0;
LAB_2c644bee:
    if (*(int *)(DAT_2c644ce0 + 0xa0) == 0) {
      puVar7 = (undefined1 *)FUN_2c6443f4(*(undefined4 *)(DAT_2c644ce0 + 0x80),0x34,1);
    }
    else {
      puVar7 = (undefined1 *)FUN_2c6473bc();
    }
    if (puVar7 == (undefined1 *)0x0) {
LAB_2c644c26:
      FUN_2c643ba8(0,0xfffffffb);
      return (undefined1 *)0x0;
    }
    if (bVar1) {
      iVar3 = FUN_2c6443f4(*(undefined4 *)(iVar2 + 0x7c),uVar9,0);
      if (iVar3 == 0) {
        if (*(int *)(iVar2 + 0xa0) == 0) {
          FUN_2c64447c(*(undefined4 *)(iVar2 + 0x80),puVar7);
        }
        else {
          FUN_2c64749c();
        }
        goto LAB_2c644c26;
      }
      uVar8 = 3;
LAB_2c644c96:
      uVar5 = FUN_2c674268(iVar3,0,uVar9);
    }
    else {
      if (puVar7 == (undefined1 *)0x0) goto LAB_2c644c26;
      uVar8 = 1;
    }
LAB_2c644bac:
    puVar7[2] = uVar8;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 0x30) = 0;
    *(undefined4 *)(puVar7 + 4) = local_2c;
    *(int *)(puVar7 + 0x24) = param_2;
    *(undefined4 *)(puVar7 + 0x28) = 0;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    *puVar7 = 0xfa;
    FUN_2c647368(puVar7 + 0xc,param_1,iVar6,uVar5);
    *(undefined4 *)(iVar2 + 0x70) = DAT_2c644cdc;
    FUN_2c643bb0(puVar7,*(undefined4 *)(puVar7 + 4));
  }
  else {
    puVar7 = (undefined1 *)param_3[2];
    if (puVar7 == (undefined1 *)0x0) {
      if (param_3[3] != 0) goto LAB_2c644c40;
    }
    else if ((((uint)puVar7 & 3) != 0) || ((uint)param_3[3] < 0x34)) {
LAB_2c644c40:
      FUN_2c643ba8(0,0xfffffff7);
      return (undefined1 *)0x0;
    }
    local_2c = *param_3;
    uVar5 = param_3[4];
    uVar4 = param_3[5];
    if (uVar5 == 0) {
      if (uVar4 == 0) {
        if (puVar7 == (undefined1 *)0x0) {
          bVar1 = true;
          uVar5 = 0;
          goto LAB_2c644bee;
        }
        iVar3 = FUN_2c6443f4(*(undefined4 *)(DAT_2c644ce0 + 0x7c),uVar9,0);
        if (iVar3 == 0) goto LAB_2c644c26;
        uVar8 = 2;
        goto LAB_2c644c96;
      }
    }
    else if ((uVar9 < uVar4 || uVar9 - uVar4 == 0) && (uVar5 & 3) == 0) {
      if (puVar7 == (undefined1 *)0x0) {
        bVar1 = false;
        goto LAB_2c644bee;
      }
      uVar8 = 0;
      goto LAB_2c644bac;
    }
    puVar7 = (undefined1 *)0x0;
    FUN_2c643ba8(0,0xfffffff6);
  }
  return puVar7;
}

