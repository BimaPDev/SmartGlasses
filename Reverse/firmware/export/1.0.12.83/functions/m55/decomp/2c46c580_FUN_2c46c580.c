/* FUN_2c46c580 @ 0x2c46c580 */

undefined1 *
FUN_2c46c580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar4 = (undefined1 *)FUN_2c6685b4(0x28,1,param_3,param_4,param_4);
  uVar2 = DAT_2c46c5d0;
  uVar1 = DAT_2c46c5cc;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 4;
    *(undefined4 *)(puVar4 + 0xc) = 1;
    uVar3 = DAT_2c46c5d4;
    *(undefined4 *)(puVar4 + 4) = uVar1;
    *(undefined4 *)(puVar4 + 8) = uVar2;
    iVar5 = FUN_2c46a264(0x10,0,uVar3);
    *(int *)(puVar4 + 0x18) = iVar5;
    if (iVar5 == 0) {
      FUN_2c46a5a4(*(undefined4 *)(puVar4 + 0x10));
      FUN_2c669588(puVar4);
      puVar6 = (undefined4 *)FUN_2c6685e0();
      *puVar6 = 0xc;
      puVar4 = (undefined1 *)0x0;
    }
  }
  return puVar4;
}

