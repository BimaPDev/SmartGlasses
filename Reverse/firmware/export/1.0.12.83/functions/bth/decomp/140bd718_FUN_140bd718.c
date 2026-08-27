/* FUN_140bd718 @ 0x140bd718 */

void FUN_140bd718(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int local_3c;
  
  local_3c = *DAT_140bd858;
  uVar1 = FUN_140db6f0(0x10);
  uVar2 = FUN_140db6f0(0x10);
  FUN_140bd690(param_4,uVar1,uVar2);
  uVar4 = param_2 >> 4;
  if ((param_2 & 0xf) == 0) {
    iVar3 = 0x10;
    iVar5 = 0;
    if (uVar4 != 0) {
      puVar8 = auStack_60 + uVar4 * -0x10;
      iVar3 = uVar4 << 4;
      uVar4 = uVar4 - 1;
      FUN_140e5658(puVar8,0,iVar3);
      puVar6 = puVar8 + uVar4 * 0x10;
      FUN_140e5278(puVar8,param_1,param_2);
      FUN_140e59b8(puVar6,puVar6,uVar1);
      goto LAB_140bd79a;
    }
  }
  else {
    iVar3 = (uVar4 + 1) * 0x10;
    iVar5 = uVar4 << 4;
  }
  iVar3 = -iVar3;
  puVar8 = auStack_60 + iVar3;
  FUN_140e5658(auStack_60 + iVar3,0);
  FUN_140e5278(auStack_60 + iVar3,param_1,param_2);
  puVar6 = auStack_60 + iVar5 + iVar3;
  auStack_60[param_2 + iVar3] = 0x80;
  FUN_140e59b8(puVar6,puVar6,uVar2);
LAB_140bd79a:
  local_5c = *DAT_140bd85c;
  uStack_58 = DAT_140bd85c[1];
  uStack_54 = DAT_140bd85c[2];
  uStack_50 = DAT_140bd85c[3];
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      FUN_140e59b8(auStack_4c,puVar8 + uVar7 * 0x10,&local_5c);
      uVar7 = uVar7 + 1 & 0xff;
      FUN_140bdc40(auStack_4c,&local_5c,param_4);
    } while ((int)uVar7 < (int)uVar4);
  }
  FUN_140e59b8(auStack_4c,puVar6,&local_5c);
  FUN_140bdc40(auStack_4c,param_3,param_4);
  FUN_140db700(uVar1);
  FUN_140db700(uVar2);
  if (*DAT_140bd858 != local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

