/* FUN_2c47919a @ 0x2c47919a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47919a(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  short *in_r3;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  
  iVar3 = _LAB_2c479240;
  if (*in_r3 == 0) {
    uVar7 = 0x1fb;
    uVar6 = (uint)*(ushort *)(_LAB_2c479240 + 0xe);
    if (*(ushort *)(_LAB_2c479240 + 0x10) <= uVar6) goto LAB_2c47921c;
  }
  else {
    uVar6 = (uint)*(ushort *)(_LAB_2c479240 + 0xe);
    uVar7 = (uint)(ushort)(*in_r3 - 5);
    if (*(ushort *)(_LAB_2c479240 + 0x10) <= uVar6) {
LAB_2c47921c:
      iVar3 = FUN_2c47bba8();
      if (iVar3 != 4) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x2c47bc96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_2c47bc9c + (uint)*DAT_2c47bc98 * 4))(0x67);
      return;
    }
  }
  uVar8 = uVar6 * uVar7 + uVar7;
  uVar9 = (short)uVar6 * (short)uVar7;
  uVar7 = (uint)uVar9;
  uVar10 = uVar6 + 1 & 0xffff;
  if (*(uint *)(_LAB_2c479240 + 0xc364) <= uVar8) {
    uVar8 = *(uint *)(_LAB_2c479240 + 0xc364);
  }
  uVar1 = (undefined2)(uVar6 + 1);
  if (uVar7 < (uVar8 & 0xffff)) {
    iVar5 = _LAB_2c479240 + 0x12;
    iVar2 = _LAB_2c479240 + 0xd599;
    *(undefined2 *)(_LAB_2c479240 + 0xd99a) = uVar1;
    *(char *)(iVar3 + 0xd597) = (char)uVar10;
    *(char *)(iVar3 + 0xd598) = (char)(uVar10 >> 8);
    FUN_2c674668(iVar2,iVar5 + uVar7,(uVar8 & 0xffff) - uVar7);
    sVar4 = (2 - uVar9) + (short)uVar8;
    *(short *)(iVar3 + 0xd798) = sVar4;
  }
  else {
    sVar4 = *(short *)(_LAB_2c479240 + 0xd798);
  }
  *(undefined2 *)(iVar3 + 0xe) = uVar1;
  FUN_2c4f7174(0x1d,_DAT_2c479244,sVar4);
  return;
}

