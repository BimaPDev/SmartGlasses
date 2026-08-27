/* FUN_140da918 @ 0x140da918 */

undefined4 FUN_140da918(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_25;
  undefined4 local_24;
  undefined1 auStack_20 [12];
  
  piVar1 = DAT_140da99c;
  if (param_1 != -1) {
    local_25 = (undefined1)param_1;
    FUN_140e5658(auStack_20,0,8);
    iVar5 = *piVar1;
    if (*(int *)(iVar5 + 0x58) == 0) {
      iVar2 = FUN_140db6f0(0x50);
      *(int *)(iVar5 + 0x58) = iVar2;
      if (iVar2 == 0) {
        FUN_140da8c8(DAT_140da9a4,0x18,0,DAT_140da9a0);
      }
      puVar4 = *(undefined4 **)(*piVar1 + 0x58);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 7) = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
    }
    uVar3 = (**(code **)(DAT_140da9a8 + 0xe4))(*piVar1,&local_24,&local_25,1,auStack_20);
    if (uVar3 < 2) {
      return local_24;
    }
  }
  return 0xffffffff;
}

