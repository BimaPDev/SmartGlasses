/* FUN_2c47b7fa @ 0x2c47b7fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47b7fa(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_r4;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  
  puVar5 = _LAB_2c47b878;
  cVar2 = *(char *)(param_3 + 0xb78);
  if (cVar2 == '\x01') {
    uVar8 = *_LAB_2c47b878;
    *_LAB_2c47b87c = 4;
    FUN_2c644958(uVar8);
    uVar8 = FUN_2c64418c(_LAB_2c47b880,0);
    *puVar5 = uVar8;
    FUN_2c6448b4(uVar8,10000);
    iVar7 = _LAB_2c479240;
    if (*_LAB_2c47923c == 0) {
      uVar15 = 0x1fb;
      uVar12 = (uint)*(ushort *)(_LAB_2c479240 + 0xe);
      if (*(ushort *)(_LAB_2c479240 + 0x10) <= uVar12) goto LAB_2c47921c;
    }
    else {
      uVar12 = (uint)*(ushort *)(_LAB_2c479240 + 0xe);
      uVar15 = (uint)(ushort)(*_LAB_2c47923c - 5);
      if (*(ushort *)(_LAB_2c479240 + 0x10) <= uVar12) {
LAB_2c47921c:
        iVar7 = FUN_2c47bba8();
        if (iVar7 != 4) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x2c47bc96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(DAT_2c47bc9c + (uint)*DAT_2c47bc98 * 4))(0x67);
        return;
      }
    }
    uVar13 = uVar12 * uVar15 + uVar15;
    uVar14 = (short)uVar12 * (short)uVar15;
    uVar15 = (uint)uVar14;
    uVar16 = uVar12 + 1 & 0xffff;
    if (*(uint *)(_LAB_2c479240 + 0xc364) <= uVar13) {
      uVar13 = *(uint *)(_LAB_2c479240 + 0xc364);
    }
    uVar3 = (undefined2)(uVar12 + 1);
    if (uVar15 < (uVar13 & 0xffff)) {
      iVar10 = _LAB_2c479240 + 0x12;
      iVar6 = _LAB_2c479240 + 0xd599;
      *(undefined2 *)(_LAB_2c479240 + 0xd99a) = uVar3;
      *(char *)(iVar7 + 0xd597) = (char)uVar16;
      *(char *)(iVar7 + 0xd598) = (char)(uVar16 >> 8);
      FUN_2c674668(iVar6,iVar10 + uVar15,(uVar13 & 0xffff) - uVar15,uVar16 >> 8,unaff_r4);
      sVar9 = (2 - uVar14) + (short)uVar13;
      *(short *)(iVar7 + 0xd798) = sVar9;
    }
    else {
      sVar9 = *(short *)(_LAB_2c479240 + 0xd798);
    }
    *(undefined2 *)(iVar7 + 0xe) = uVar3;
    uVar11 = 0x1d;
    uVar8 = _DAT_2c479244;
  }
  else {
    if (cVar2 != '\x05') {
      if (cVar2 == '\0') {
        func_0x2c479a80(1);
      }
      else {
        FUN_2c6741e8(0x711,_LAB_2c47b874,_LAB_2c47b870);
        func_0x2c479a80(0);
      }
      puVar4 = _LAB_2c4799b4;
      FUN_2c47bbc0(0);
      FUN_2c674268(puVar4,0,0xe1b8);
      *puVar4 = 0xff;
      return;
    }
    if (*(short *)(param_3 + 0xd78) == 0) {
      return;
    }
    *(undefined2 *)(_LAB_2c4795b0 + 0xe) = 0;
    iVar7 = _LAB_2c479190;
    if (*_LAB_2c47918c == 0) {
      uVar12 = 0x1fb;
    }
    else {
      uVar12 = (uint)(ushort)(*_LAB_2c47918c - 5);
    }
    uVar14 = *(ushort *)(_LAB_2c479190 + 0xe);
    if ((uint)*(ushort *)(_LAB_2c479190 + 0xcd78) <= (uint)uVar14) {
      *(undefined2 *)(_LAB_2c479190 + 0xcd78) = 0;
      return;
    }
    puVar1 = (uint *)(_LAB_2c479190 + 0xc364);
    sVar9 = *(short *)(_LAB_2c479190 + (uint)uVar14 * 2 + 0xcb7a);
    *(ushort *)(_LAB_2c479190 + 0xe) = uVar14 + 1;
    uVar14 = (sVar9 - 1U) * (short)uVar12;
    uVar12 = (ushort)(sVar9 - 1U) * uVar12 + uVar12;
    uVar15 = (uint)uVar14;
    if (*puVar1 <= uVar12) {
      uVar12 = *puVar1;
    }
    if (uVar15 < (uVar12 & 0xffff)) {
      *(short *)(iVar7 + 0xd99a) = sVar9;
      *(char *)(iVar7 + 0xd597) = (char)sVar9;
      *(char *)(iVar7 + 0xd598) = (char)((ushort)sVar9 >> 8);
      FUN_2c674668(iVar7 + 0xd599,iVar7 + 0x12 + uVar15,(uVar12 & 0xffff) - uVar15);
      uVar8 = _DAT_2c479194;
      uVar11 = 0x1e;
      sVar9 = (2 - uVar14) + (short)uVar12;
      *(short *)(iVar7 + 0xd798) = sVar9;
    }
    else {
      uVar11 = 0x1e;
      sVar9 = *(short *)(iVar7 + 0xd798);
      uVar8 = _DAT_2c479194;
    }
  }
  FUN_2c4f7174(uVar11,uVar8,sVar9);
  return;
}

