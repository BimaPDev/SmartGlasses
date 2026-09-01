/* FUN_10135318 @ 0x10135318 */

ushort FUN_10135318(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = FUN_100cf740();
  uVar1 = 0;
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 0x28);
    uVar1 = 0;
    if (piVar3 != (int *)0x0) {
      if (piVar3 + -0x4d == (int *)0x0) {
        uVar1 = 0;
      }
      else {
        piVar4 = (int *)*piVar3;
        if (piVar4 != (int *)0x0) {
          piVar4 = piVar4 + -0x4d;
        }
        uVar1 = 0;
        piVar3 = piVar3 + -0x4d;
        while( true ) {
          piVar5 = piVar4;
          if (uVar1 < *(ushort *)((int)piVar3 + 0x66)) {
            uVar1 = *(ushort *)((int)piVar3 + 0x66);
          }
          if (piVar5 == (int *)0x0) break;
          piVar3 = piVar5;
          piVar4 = (int *)0x0;
          if ((piVar5 != (int *)0xfffffecc) && (piVar4 = (int *)piVar5[0x4d], piVar4 != (int *)0x0))
          {
            piVar4 = piVar4 + -0x4d;
          }
        }
      }
    }
  }
  return uVar1;
}

