/* FUN_140df57a @ 0x140df57a */

uint FUN_140df57a(undefined4 *param_1,uint *param_2,undefined4 *param_3,uint param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = param_2;
  do {
    puVar7 = puVar8;
    puVar8 = puVar7 + 1;
    uVar6 = *puVar7;
    iVar2 = FUN_140db56c(uVar6,param_5);
  } while (iVar2 != 0);
  if (uVar6 == 0x2d) {
    uVar6 = *puVar8;
    bVar1 = true;
    puVar8 = puVar7 + 2;
  }
  else {
    if (uVar6 == 0x2b) {
      uVar6 = *puVar8;
      puVar8 = puVar7 + 2;
    }
    bVar1 = false;
  }
  if (param_4 == 0) {
    if (uVar6 != 0x30) {
      param_4 = 10;
      goto LAB_140df5c4;
    }
  }
  else if ((param_4 != 0x10) || (uVar6 != 0x30)) goto LAB_140df5c4;
  if ((*puVar8 & 0xffffffdf) == 0x58) {
    uVar6 = puVar8[1];
    param_4 = 0x10;
    puVar8 = puVar8 + 2;
  }
  else {
    uVar6 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_140df5c4:
  uVar3 = 0;
  uVar4 = 0xffffffff / param_4;
  iVar2 = 0;
  do {
    uVar5 = uVar6 - 0x30;
    if (9 < uVar5) {
      if (uVar6 - 0x41 < 0x1a) {
        uVar5 = uVar6 - 0x37;
      }
      else {
        if (0x19 < uVar6 - 0x61) break;
        uVar5 = uVar6 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar5) break;
    if (((iVar2 < 0) || (uVar4 < uVar3)) ||
       ((uVar3 == uVar4 && ((int)~(param_4 * uVar4) < (int)uVar5)))) {
      iVar2 = -1;
    }
    else {
      uVar3 = uVar3 * param_4 + uVar5;
      iVar2 = 1;
    }
    uVar6 = *puVar8;
    puVar8 = puVar8 + 1;
  } while( true );
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
    *param_1 = 0x22;
    if (param_3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar1) {
      uVar3 = -uVar3;
    }
    if (param_3 == (undefined4 *)0x0) {
      return uVar3;
    }
    if (iVar2 == 0) goto LAB_140df654;
  }
  param_2 = puVar8 + -1;
LAB_140df654:
  *param_3 = param_2;
  return uVar3;
}

