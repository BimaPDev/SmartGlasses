/* FUN_1007a30c @ 0x1007a30c */

uint FUN_1007a30c(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  char cVar6;
  uint uVar7;
  
  uVar2 = 0;
  cVar6 = '\v';
  uVar7 = 0;
  puVar4 = DAT_1007a338;
  while (cVar6 = cVar6 + -1, cVar6 != '\0') {
    puVar5 = puVar4 + 1;
    uVar1 = *puVar4;
    puVar4 = puVar5;
    if (uVar1 != 0) {
      uVar2 = uVar2 + 1 & 0xff;
      uVar7 = uVar7 + uVar1 & 0xffff;
    }
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar7 / uVar2;
  }
  return uVar3;
}

