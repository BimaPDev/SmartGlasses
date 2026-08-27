/* FUN_2c46c768 @ 0x2c46c768 */

undefined1 * FUN_2c46c768(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 in_d0;
  
  puVar3 = (undefined1 *)FUN_2c6685b4(0x28,1);
  uVar1 = DAT_2c46c7cc;
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 0xc) = 1;
    uVar2 = DAT_2c46c7d0;
    *puVar3 = 2;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined4 *)(puVar3 + 8) = uVar2;
    *(undefined8 *)(puVar3 + 0x18) = in_d0;
    iVar4 = FUN_2c66b660(param_1);
    if (iVar4 == 0) {
      FUN_2c46bfcc(puVar3);
      puVar5 = (undefined4 *)FUN_2c6685e0();
      *puVar5 = 0xc;
      puVar3 = (undefined1 *)0x0;
    }
    else {
      if (*(code **)(puVar3 + 0x20) != (code *)0x0) {
        (**(code **)(puVar3 + 0x20))(puVar3,*(undefined4 *)(puVar3 + 0x24));
      }
      uVar2 = DAT_2c46c7d8;
      uVar1 = DAT_2c46c7d4;
      *(int *)(puVar3 + 0x24) = iVar4;
      *(undefined4 *)(puVar3 + 8) = uVar1;
      *(undefined4 *)(puVar3 + 0x20) = uVar2;
    }
  }
  return puVar3;
}

