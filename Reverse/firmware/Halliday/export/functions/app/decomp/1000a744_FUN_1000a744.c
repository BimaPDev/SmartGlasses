/* FUN_1000a744 @ 0x1000a744 */

void FUN_1000a744(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint extraout_r2;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  puVar1 = DAT_1000a7bc;
  iVar6 = *DAT_1000a7c0;
  FUN_1011ea48(DAT_1000a7bc,0,0x43,0,param_1,param_1,param_3);
  puVar4 = DAT_1000a7c4;
  *puVar1 = 1;
  bVar2 = FUN_1011ea10(puVar4);
  uVar5 = (uint)bVar2;
  uVar3 = 0;
  puVar4 = puVar1;
  puVar7 = DAT_1000a7c4;
  if (0x3f < uVar5) {
    uVar5 = 0x40;
  }
  do {
    uVar8 = CONCAT44(puVar4 + 1,uVar3);
    if (uVar5 <= (uVar3 & 0xffff)) {
      puVar1[uVar5 + 1] = 0;
      puVar1[uVar5 + 2] = 0;
      FUN_1000a6b0(1,DAT_1000a7bc,uVar5 + 3);
      *(undefined2 *)(DAT_1000a7c8 + 10) = 1;
      if (*DAT_1000a7c0 == iVar6) {
        return;
      }
      uVar8 = FUN_1013cdc0();
      uVar5 = extraout_r2;
    }
    puVar4 = (undefined1 *)((ulonglong)uVar8 >> 0x20);
    uVar3 = (int)uVar8 + 1;
    *puVar4 = *puVar7;
    puVar7 = puVar7 + 1;
  } while( true );
}

