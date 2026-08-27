/* FUN_1405e8fc @ 0x1405e8fc */

void FUN_1405e8fc(int param_1,undefined4 *param_2,undefined2 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 == 0) || (uVar1 = param_1 - 0x70U & 0xff, uVar1 == 0)) {
    puVar2 = (undefined4 *)FUN_14074378(0xd34,param_3,4,0x10);
    if (puVar2 == (undefined4 *)0x0) {
      uVar5 = 0x4b;
    }
    else {
      uVar7 = param_2[1];
      uVar6 = param_2[2];
      uVar4 = param_2[3];
      uVar5 = 0;
      *puVar2 = *param_2;
      puVar2[1] = uVar7;
      puVar2[2] = uVar6;
      puVar2[3] = uVar4;
      FUN_140743d0(puVar2,param_3);
    }
  }
  else {
    uVar5 = (undefined2)uVar1;
  }
  puVar3 = (undefined1 *)FUN_14074378(0xd00,param_3,4,6);
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined2 *)(puVar3 + 2) = uVar5;
    *puVar3 = 0x33;
    puVar3[4] = 0xff;
    FUN_140743d0();
    return;
  }
  return;
}

