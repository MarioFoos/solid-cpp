#ifndef ISP_MACHINENOISP_H_
#define ISP_MACHINENOISP_H_

// Clase que viola el principio ISP, ya que puede obligar a implementar métodos que no se necesitan
class MachineNoISP
{
	public:
		MachineNoISP(){}
		virtual ~MachineNoISP(){}

		virtual void print() = 0;
		virtual void scan() = 0;
		virtual void fax() = 0;
};

#endif /* ISP_MACHINENOISP_H_ */
