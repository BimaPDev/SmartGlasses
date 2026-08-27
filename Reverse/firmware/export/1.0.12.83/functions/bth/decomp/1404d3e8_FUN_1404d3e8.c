/* FUN_1404d3e8 @ 0x1404d3e8 */

void FUN_1404d3e8(int param_1,char *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    cVar4 = (char)uVar2;
    uVar2 = uVar2 + 1;
    if ((param_1 >> uVar1 & 1U) != 0) {
      *param_2 = cVar4;
      goto LAB_1404d406;
    }
  } while (uVar2 != 8);
  cVar4 = *param_2;
LAB_1404d406:
  uVar2 = 0;
  cVar3 = '\0';
  do {
    if ((param_1 >> (uVar2 & 0xff) & 1U) != 0) {
      cVar3 = cVar3 + '\x01';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 8);
  *param_3 = cVar3 + cVar4 + -1;
  return;
}

