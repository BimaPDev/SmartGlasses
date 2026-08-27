/* FUN_1406111c @ 0x1406111c */

undefined4 FUN_1406111c(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short sVar4;
  int iVar5;
  ushort uVar6;
  undefined1 uVar7;
  
  if (param_2 == 0) {
    sVar4 = 4;
    uVar6 = 0;
LAB_14061178:
    if (param_3 == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    puVar2 = (undefined1 *)FUN_1406db30(0x203f,sVar4);
    if (puVar2 == (undefined1 *)0x0) {
      return 0x4b;
    }
    uVar1 = *(undefined1 *)(param_1 + 0xc);
    puVar2[1] = uVar7;
    *puVar2 = uVar1;
    puVar2[2] = (char)uVar6;
    puVar3 = puVar2 + 3;
    if (param_2 == 0) {
      iVar5 = 0;
      goto LAB_14061158;
    }
  }
  else {
    uVar6 = *(ushort *)(param_2 + 4);
    if (uVar6 < 0xfd) {
      sVar4 = uVar6 + 4;
      goto LAB_14061178;
    }
    puVar2 = (undefined1 *)FUN_1406db30(0x203f,0x100);
    if (puVar2 == (undefined1 *)0x0) {
      return 0x4b;
    }
    uVar6 = 0xfc;
    *puVar2 = *(undefined1 *)(param_1 + 0xc);
    puVar2[1] = (char)param_3;
    puVar3 = puVar2 + 3;
    puVar2[2] = 0xfc;
  }
  iVar5 = *(ushort *)(param_2 + 6) + 0x30 + param_2;
LAB_14061158:
  FUN_140e5278(puVar3,iVar5,uVar6);
  FUN_140736fc(param_2,uVar6);
  FUN_1406da30(puVar2,2,DAT_140611b0);
  return 0;
}

