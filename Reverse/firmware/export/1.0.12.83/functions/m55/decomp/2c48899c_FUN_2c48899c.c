/* FUN_2c48899c @ 0x2c48899c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48899c(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 uStack_f8;
  uint auStack_f7 [15];
  undefined1 uStack_bb;
  uint auStack_ba [15];
  undefined1 uStack_7e;
  uint auStack_78 [8];
  uint auStack_58 [2];
  uint auStack_50 [12];
  uint auStack_20 [3];
  int iStack_14;
  
  iStack_14 = *_LAB_2c488ae0;
  auStack_78[0] = 0;
  FUN_2c674268(auStack_78 + 1,0,0x24,0);
  auStack_50[0] = 0;
  FUN_2c674268(auStack_50 + 1,0,0x38);
  FUN_2c674268(&uStack_f8,0,0x80);
  iVar3 = FUN_2c4eab7c();
  (**(code **)(iVar3 + 0x20))(auStack_78,0x28);
  if (((char)auStack_78[0] != '5') || ((auStack_78[0] >> 8 & 0xff) != 0x35)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x142,_LAB_2c488aec,_LAB_2c488ae8,_LAB_2c488ae4);
  }
  uStack_f8 = 0;
  puVar1 = auStack_78;
  puVar2 = auStack_f7;
  do {
    puVar8 = puVar2;
    puVar7 = puVar1;
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *puVar8 = *puVar7;
    puVar8[1] = uVar4;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
    puVar1 = puVar7 + 4;
    puVar2 = puVar8 + 4;
  } while (puVar7 + 4 != auStack_58);
  uVar4 = puVar7[4];
  puVar8[5] = puVar7[5];
  puVar8[4] = uVar4;
  iVar3 = FUN_2c4eab7c();
  (**(code **)(iVar3 + 0x30))(auStack_50,0x3c);
  if (((char)auStack_50[0] == '5') && ((auStack_50[0] >> 8 & 0xff) == 0x35)) {
    uStack_bb = 0;
    puVar1 = auStack_ba;
    puVar2 = auStack_50;
    do {
      puVar8 = puVar2;
      puVar7 = puVar1;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      puVar1 = puVar7 + 4;
      puVar2 = puVar8 + 4;
    } while (puVar8 + 4 != auStack_20);
    uVar4 = puVar8[5];
    uVar5 = puVar8[6];
    puVar7[4] = puVar8[4];
    puVar7[5] = uVar4;
    puVar7[6] = uVar5;
    uStack_7e = 3;
    FUN_2c49737c(0x17,&uStack_f8,0x80);
    if (*_LAB_2c488ae0 == iStack_14) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x14d,_LAB_2c488aec,_LAB_2c488ae8,_LAB_2c488af0);
}

