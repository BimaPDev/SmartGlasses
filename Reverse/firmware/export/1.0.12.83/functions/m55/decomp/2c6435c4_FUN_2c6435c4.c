/* FUN_2c6435c4 @ 0x2c6435c4 */

void FUN_2c6435c4(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  if ((((uint)param_1 ^ (uint)param_2) & 3) != 0) {
    do {
      uVar4 = *param_2;
      *(char *)param_1 = (char)uVar4;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    } while ((char)uVar4 != '\0');
    return;
  }
  if (((uint)param_2 & 3) != 0) {
    puVar3 = param_2;
    if (((uint)param_2 & 1) != 0) {
      puVar3 = (uint *)((int)param_2 + 1);
      uVar4 = *param_2;
      *(char *)param_1 = (char)uVar4;
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar4 == '\0') {
        return;
      }
    }
    param_2 = puVar3;
    if (((uint)puVar3 & 2) != 0) {
      param_2 = (uint *)((int)puVar3 + 2);
      uVar1 = (ushort)*puVar3;
      bVar7 = (uVar1 & 0xff) != 0;
      if (bVar7) {
        *(ushort *)param_1 = uVar1;
        param_1 = (uint *)((int)param_1 + 2);
      }
      else {
        *(char *)param_1 = (char)uVar1;
      }
      if (!bVar7 || (uVar1 & 0xff00) == 0) {
        return;
      }
    }
  }
  uVar4 = *param_2;
  puVar3 = param_2 + 1;
  puVar6 = param_1;
  if (((uint)param_2 & 4) != 0) {
    if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) goto LAB_2c643628;
    puVar6 = param_1 + 1;
    *param_1 = uVar4;
    puVar3 = param_2 + 2;
    uVar4 = param_2[1];
  }
  while( true ) {
    puVar2 = puVar3 + 1;
    uVar5 = *puVar3;
    param_1 = puVar6;
    if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) break;
    param_1 = puVar6 + 1;
    *puVar6 = uVar4;
    uVar4 = uVar5;
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
    puVar3 = puVar3 + 2;
    uVar4 = *puVar2;
    puVar6 = puVar6 + 2;
    *param_1 = uVar5;
  }
LAB_2c643628:
  do {
    *(char *)param_1 = (char)uVar4;
    uVar5 = uVar4 & 0xff;
    uVar4 = uVar4 >> 8 | uVar4 << 0x18;
    param_1 = (uint *)((int)param_1 + 1);
  } while (uVar5 != 0);
  return;
}

