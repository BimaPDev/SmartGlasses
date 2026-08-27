/* FUN_2c6688d8 @ 0x2c6688d8 */

undefined4 * FUN_2c6688d8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  FUN_2c668838();
  iVar3 = *DAT_2c66895c;
  if (*(int *)(iVar3 + 0x18) == 0) {
    FUN_2c668868(iVar3);
  }
  piVar4 = (int *)(iVar3 + 0x48);
  do {
    uVar1 = DAT_2c668960;
    iVar3 = piVar4[1];
    puVar2 = (undefined4 *)piVar4[2];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      if (*(short *)(puVar2 + 3) == 0) {
        puVar2[0x19] = 0;
        puVar2[3] = uVar1;
        FUN_2c6694a4(puVar2 + 0x16);
        FUN_2c668844();
        *puVar2 = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        FUN_2c674268(puVar2 + 0x17,0,8);
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        return puVar2;
      }
      puVar2 = puVar2 + 0x1a;
    }
    if (*piVar4 == 0) {
      iVar3 = FUN_2c66880c(param_1,4);
      *piVar4 = iVar3;
      if (iVar3 == 0) {
        FUN_2c668844();
        *param_1 = 0xc;
        return (undefined4 *)0x0;
      }
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}

