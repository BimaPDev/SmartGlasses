/* FUN_100faff0 @ 0x100faff0 */

undefined2 FUN_100faff0(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  if (puVar2 + 1 < *(undefined1 **)(param_1 + 0x24)) {
    puVar3 = puVar2 + 2;
    uVar1 = CONCAT11(*puVar2,puVar2[1]);
  }
  else {
    uVar1 = 0;
    puVar3 = puVar2;
  }
  *(undefined1 **)(param_1 + 0x20) = puVar3;
  return uVar1;
}

