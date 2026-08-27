/* FUN_140dacc0 @ 0x140dacc0 */

undefined4 * FUN_140dacc0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  FUN_140dac20();
  iVar3 = *DAT_140dad44;
  if (*(int *)(iVar3 + 0x18) == 0) {
    FUN_140dac50(iVar3);
  }
  piVar4 = (int *)(iVar3 + 0x48);
  do {
    uVar1 = DAT_140dad48;
    iVar3 = piVar4[1];
    puVar2 = (undefined4 *)piVar4[2];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      if (*(short *)(puVar2 + 3) == 0) {
        puVar2[0x19] = 0;
        puVar2[3] = uVar1;
        FUN_140db61c(puVar2 + 0x16);
        FUN_140dac2c();
        *puVar2 = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        FUN_140e5658(puVar2 + 0x17,0,8);
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        return puVar2;
      }
      puVar2 = puVar2 + 0x1a;
    }
    if (*piVar4 == 0) {
      iVar3 = FUN_140dabf4(param_1,4);
      *piVar4 = iVar3;
      if (iVar3 == 0) {
        FUN_140dac2c();
        *param_1 = 0xc;
        return (undefined4 *)0x0;
      }
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}

