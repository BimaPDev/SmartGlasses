/* FUN_2c4bb34e @ 0x2c4bb34e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bb34e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb54c,param_1,param_3,param_4,param_4);
  }
  if (*_LAB_2c4bb524 == '\0') {
    *_LAB_2c4bb524 = '\x01';
    puVar4 = _LAB_2c4bb530;
    *_LAB_2c4bb52c = 0xffff;
    *puVar4 = 0xffff;
    iVar5 = func_0x2c4bb308(param_1);
  }
  else {
    iVar5 = func_0x2c4bb308(param_1);
  }
  if (iVar5 != 0) {
    func_0x2c4bb204(param_1);
  }
  iVar5 = _LAB_2c4bb558;
  pbVar8 = _LAB_2c4bb540;
  iVar7 = _LAB_2c4bb558 + param_1 * 0xc;
  uVar1 = *(undefined1 *)(iVar7 + 5);
  if (param_2 == (byte *)0x0) {
    FUN_2c673e48(uVar1);
    uVar2 = *(undefined1 *)(iVar7 + 6);
    uVar11 = 0x910;
    FUN_2c673e48(uVar2);
    FUN_2c674438(uVar1);
    FUN_2c674438(uVar2);
code_r0x2c4bb4ea:
    uVar11 = uVar11 | 0x60;
    param_2 = pbVar8;
  }
  else {
    FUN_2c673e48(uVar1);
    uVar2 = *(undefined1 *)(iVar7 + 6);
    FUN_2c673e48(uVar2);
    FUN_2c674438(uVar1);
    FUN_2c674438(uVar2);
    if (4 < *param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bb550);
    }
    uVar11 = *(uint *)(_LAB_2c4bb528 + (uint)*param_2 * 4);
    if (param_2[1] == 1) {
      uVar11 = uVar11 | 8;
      bVar3 = param_2[2];
    }
    else {
      if (param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4bb544);
      }
      bVar3 = param_2[2];
    }
    pbVar8 = param_2;
    switch(bVar3) {
    case 0:
      break;
    case 1:
      uVar11 = uVar11 | 0x20;
      break;
    case 2:
      uVar11 = uVar11 | 0x40;
      break;
    case 3:
      goto code_r0x2c4bb4ea;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bb554);
    }
  }
  uVar9 = (uint)param_2[3];
  if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb548,uVar9);
  }
  uVar6 = (uint)param_2[0xc];
  uVar10 = uVar6 & 1;
  if ((param_2[0xc] & 1) != 0) {
    uVar11 = uVar11 | 0x8000;
    uVar10 = 1;
  }
  if ((int)(uVar6 << 0x1e) < 0) {
    uVar10 = uVar10 | 2;
  }
  if ((int)(uVar6 << 0x1d) < 0) {
    uVar10 = uVar10 | 4;
  }
  iVar7 = *(int *)(iVar5 + param_1 * 0xc);
  *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffffe;
  *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) & 0xffffffef;
  do {
  } while ((*(uint *)(iVar7 + 0x18) & 8) != 0);
  *(undefined4 *)(iVar7 + 4) = 1;
  *(undefined4 *)(iVar7 + 0x38) = 0;
  *(undefined4 *)(iVar7 + 0x44) = 0xffffffff;
  FUN_2c4babcc(param_1,*(undefined4 *)(param_2 + 8));
  uVar6 = (uint)*(char *)(iVar5 + param_1 * 0xc + 4);
  *(undefined4 *)(iVar7 + 0x54) = 3;
  *(uint *)(iVar7 + 0x2c) = uVar11;
  *(uint *)(iVar7 + 0x48) = uVar10;
  *(uint *)(iVar7 + 0x34) = (param_2[4] & 7) << 3 | param_2[5] & 7;
  *(uint *)(iVar7 + 0x30) = uVar9 * 0x4000 + 0x301;
  iVar5 = _LAB_2c4bb534;
  if (uVar6 != 0x48) {
    *(undefined4 *)(*(int *)(_LAB_2c4bb534 + 8) + (uVar6 + 0x10) * 4) = _LAB_2c4bb538;
    iVar7 = _LAB_2c4bb53c;
    DataSynchronizationBarrier(0xf);
    if ((int)uVar6 < 0) {
      *(undefined1 *)((uVar6 & 0xf) + iVar5 + 0x14) = 0xa0;
      return 0;
    }
    iVar5 = 1 << (uVar6 & 0x1f);
    *(undefined1 *)(_LAB_2c4bb53c + uVar6 + 0x300) = 0xa0;
    *(int *)(iVar7 + (uVar6 >> 5) * 4 + 0x180) = iVar5;
    *(int *)(iVar7 + (uVar6 >> 5) * 4) = iVar5;
  }
  return 0;
}

